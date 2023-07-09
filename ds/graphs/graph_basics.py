from collections import deque
import sys
sys.setrecursionlimit(1000)

class graph:
    def __init__(self,nvertices):
        self.nvertices = nvertices
        self.matrix =[[0 for i in range(nvertices)] for j in range(nvertices)]
    def adjancent_vertices(self,vertex,visited):
        res = []
        for i in range(len(self.matrix[vertex])):
            if self.matrix[vertex][i]>0 and visited[i]==False:
                res.append(i)
                visited[i] = True
        return res
    def addEdge(self,v1,v2):
            self.matrix[v1][v2]=1
            self.matrix[v2][v1]=1
    
    def bfs_helper(self,sv,visited):
        queue = deque()
        queue.append(sv)
        visited[sv] = True
        while queue:
            size = len(queue)
            while size>0:
                element = queue.popleft()
                print(element,end="  ")
                l = self.adjancent_vertices(element,visited)
                print(l)
                for i in range(len(l)):
                    queue.append(l[i])
                size-=1
    def bfs(self):
        visited = [False for i in range(self.nvertices)]
        for i in range(len(visited)):
            if visited[i]==False:
                self.bfs_helper(i,visited)
        
    def has_edge(self,v1,v2,visited):
        visited[v1] = True
        for i in range(self.nvertices):
            if self.matrix[v1][i]>0 and visited[i]==False:
                if i==v2:
                    return True
                else:
                    self.has_edge(i,v2,visited)
        return False
    
    
    def hasEdge(self,v1,v2):
        visited = [False for i in range(self.nvertices)]
        return self.has_edge(v1,v2,visited)
    
    def dfs_helper(self,sv,visited):
        print(sv)
        visited[sv]=True
        for i in range(self.nvertices):
            if self.matrix[sv][i]>0 and visited[i]==False:
                self.dfs_helper(i,visited)
                
    def dfs(self):
        visited = [False for i in range(self.nvertices)]
        for i in range(len(visited)):
            if visited[i]==False:
                self.dfs_helper(i,visited)
        
    def removeEdge(self,v1,v2):
        if self.isEdge(v1,v2):
            self.matrix[v1][v2]=0
            self.matrix[v2][v1]=0
    def isEdge(self,v1,v2):
        return True if self.matrix[v1][v2]>0 else False
    def path_helper_dfs(self,v1,v2,visited,ans):
        visited[v1]=True
        print(v1,"--",v2)
        if v1==v2:
            ans.append(v1)
            return
        else:
            for i in range(self.nvertices):
                if self.matrix[v1][i]>0 and visited[i] == False:
                    if i not in ans:
                        self.path_helper_dfs(i,v2,visited,ans)
                        if v1 not in ans and visited[v2]:
                            ans.append(v1)
         
    def path_dfs(self,v1,v2):
        visited = [False for i in range(self.nvertices)]
        ans = []
        self.path_helper_dfs(v1,v2,visited,ans)
        return ans
    def path_bfs_helper(self,v1,v2,visited,ans):
        queue = deque()
        parent = {}
        queue.append(v1)
        visited[v1] = True
        while queue:
            element = queue.popleft()
            if element == v2:
                ans.append(element)
                parent_element = v2
                while parent_element != v1:
                    ans.append(parent[parent_element])
                    parent_element = parent[parent_element]
                # ans.reverse()
                return ans
            else:
                l = self.adjancent_vertices(element, visited)
                for i in range(len(l)):
                    parent[l[i]] = element
                    queue.append(l[i])
        return ans

    def bfs_path(self, start, end):
        visited  = [False for i in range(self.nvertices)]
        ans = []
        return self.path_bfs_helper(start,end,visited,ans)
    def is_connected_graph(self):
        visited = [False for i in range(self.nvertices)]
        self.dfs_helper(0,visited)
        for i in visited:
            if i == False:
                return False
        return True
    
        self.bfs()
    def __str__(self):
        return str(self.matrix)
# dfs of graph
# g=graph(5)
# g.addEdge(0,1)
# g.addEdge(0,2)
# g.addEdge(1,3)
# g.addEdge(2,3)
# g.addEdge(2,4)
# g.dfs()
# print("------------------")
# bfs of graph
g1=graph(4)
g1.addEdge(0,1)
g1.addEdge(0,3)
g1.addEdge(1,2)
g1.addEdge(2,3)
# g1.addEdge(2,5)
# g1.addEdge(4,6)
# g1.dfs()
# g1.bfs()
ans = g1.path_dfs(1,3)
ans1 = g1.bfs_path(1,3)
print(ans)
# print(ans1,"here is ans")
print(g1.is_connected_graph())
# print(g1.hasEdge(0,3))

# import sys
# input = sys.stdin.readline
# gi = lambda: list(map(int,input().split()))
# gs = lambda: list(input().split())

# def sol():
#     n = int(input())
#     g=graph(n[0])
#     while(n[0]):
#         l=gi()
#         g.addEdge(l[0],l[1])
#     g.bfs()

# if __name__ == "__main__":
#     sol()
