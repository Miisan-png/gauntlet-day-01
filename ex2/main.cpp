#include "EnemySpawner.hpp"

#include <iostream>

int main(){
    EnemySpawner spawner(2);

    std::cout << "spawned " << spawner.spawn() << '\n';
    std::cout << "spawned " << spawner.spawn() << '\n';
    std::cout << "spawned " << spawner.spawn() << '\n';
    std::cout << "total   " << spawner.spawnedCount() << '\n';

    return 0;
}
