class Entity {
    public:
        Entity();

        Entity(int h, int ap);

        void dealOther(Entity & enemy);

        void takeDamage(int damage);

        int getHealth();

        int getAP();

    private:
        int health;
        int attackPower;

};


