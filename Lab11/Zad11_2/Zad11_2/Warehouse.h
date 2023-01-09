#pragma once

#include <iostream>

class Warehouse {
private:
    std::string article_name_;
    int stock_;
public:
    Warehouse(std::string articleName, int stock);

    void toString();

    void sellStock(int count);

     const std::string& getArticleName() const;

    void setArticleName(const std::string& articleName);

     int getStock() const;

    void setStock(int stock);

    virtual ~Warehouse();
};