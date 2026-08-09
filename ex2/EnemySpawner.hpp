#pragma once

class EnemySpawner {
public:
    EnemySpawner(int maxCount);

    int spawn();
    int spawnedCount() const;

private:
    const int m_maxCount;
    int m_spawned;
};
