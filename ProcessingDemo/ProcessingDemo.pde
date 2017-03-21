int rectX = 0;
int xMax = 500;

float secretX;
float secretY; 
void setup() {
  size(500, 200);
  
  secretX = random(width);
  secretY = random(height);
}

void draw() {
  frameRate(200);
  
  noStroke();
  // 50 - 100
  fill(random(255),random(255),random(255), 1);
  // x,y of the center, width, height
  ellipse(mouseX, mouseY, 30, 30);
  stroke(255);
  fill(255, 0, 0);
  // x,y of the top-left corner, width, height
  rect(rectX, 0, 100, 20);
  rectX++;
  if (rectX >= xMax) {
    rectX = 0;
    xMax -= 10;
  }
  
  if (rectX > width) {
    rectX = 0; 
  }
  
  
  fill(191, 87, 0);
  beginShape();
  vertex(100, 140);
  vertex(120, 180);
  vertex(200, 40);
  endShape();
  rect(0, 0, 20, 100);
}

void mousePressed() {
  background(240,248,255);
  
  float xDiff = abs(mouseX - secretX);
  float yDiff = abs(mouseY - secretY);
  if (xDiff < 50 && yDiff < 50) {
    background(0, 0, 255);
    text("You found it!!", 0, 50);
  }
}