#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
   private:
      int height;
      // static int objectCount; // for storing tot num of rectangle objects created
   public:
      // static int objectCount; // for storing tot num of rectangle objects created
      // static int getObjectCount();
      Rectangle() = default;
      Rectangle(int height);
      Rectangle(const Rectangle& source) = delete;
      int getHeight() { return height; };
      void setHeight(int height);
};

#endif