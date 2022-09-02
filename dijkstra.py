graph = {}
graph["start"] = {}
graph["start"]["a"] = 6
graph["start"]["b"] = 2
graph["a"] = {}
graph["a"]["fin"] = 1
graph["b"] = {}
graph["b"]["a"] = 3
graph["b"]["fin"] = 5
graph["fin"] = {}

infinity = float("inf")
costs = {}
costs["a"] = 6
costs["b"] = 2
costs["fin"] = infinity

parents = {}
parents["a"] = "start"
parents["b"] = "start"
parents["fin"] = "None"

processed = []


def find_lowest_cost_node(costs):
    lowest_cost = infinity
    lowest_cost_node = None
    for node in costs:
        cost = costs[node]
        if cost < lowest_cost:
            lowest_cost = cost
            lowest_cost_node = node
    return lowest_cost_node


# dijkstra_algorithm
node = find_lowest_cost_node(costs)
while node is not None:
    cost = costs[node]
    neighbors = graph[node]
    for neighbor in neighbors:
        new_cost = cost + neighbors[neighbor]
        if costs[neighbor] > new_cost:
            costs[neighbor] = new_cost
            parents[neighbor] = node
    processed.append(node)
    node = find_lowest_cost_node(costs)
