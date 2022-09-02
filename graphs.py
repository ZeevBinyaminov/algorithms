from collections import deque

graph = {}


def is_seller(name: str) -> bool:
    return graph[name]['status'] == 'seller'


def breadth_first_search(name: str) -> str:
    search_queue = deque()
    search_queue += graph[name]
    searched = []
    while search_queue:
        person = search_queue.popleft()
        if person not in searched:
            if is_seller(person):
                return person + 'is seller'
            else:
                search_queue += graph[person]
                searched.append(person)
    return 'There is no seller'




