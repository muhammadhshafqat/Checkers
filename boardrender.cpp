#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>
using namespace sf;
using namespace std;
int main() {
    RenderWindow window(VideoMode({ 900, 900 }), "Checkers", Style::Default);
    int lr = 1, ud = 1;
    const auto onClose = [&window](const sf::Event::Closed&) {
        window.close();
    };
    auto [width, height] = window.getSize();
    Color black(0, 0, 0);
    Color white(255, 255, 255);
    Color w_trans(255, 255, 255, 0);
    Color lbrown(254, 223, 177);
    Color dbrown(134, 80, 44);
    Color ddbrown(92, 65, 62);
    Color llbrown(249, 220, 178);
    RectangleShape bbox({ width / 8.f, height / 8.f });
    bbox.setFillColor(w_trans);
    bbox.setOutlineThickness(-5.f);
    bbox.setOutlineColor(ddbrown);
    // const auto onKeyPressed = [&window, &bbox](const Event::KeyPressed& keyPressed) {
    //     if (keyPressed.code == Keyboard::Key::Right) {
    //         auto [bw, bh] = bbox.getPosition();
    //         bbox.move({100.f, 0.f});
    //     }
    // };
    float bwidth = width / 8.f;
    float bheight = height / 8.f;
    float space = 8.25;

    CircleShape dbr1(48.f);
    dbr1.setFillColor(ddbrown);
    dbr1.setPosition({ bwidth * 1.f + space, bheight * 0 + space });
    CircleShape dbr2(48.f);
    dbr2.setFillColor(ddbrown);
    dbr2.setPosition({ bwidth * 3.f + space, bheight * 0 + space });
    CircleShape dbr3(48.f);
    dbr3.setFillColor(ddbrown);
    dbr3.setPosition({ bwidth * 5.f + space, bheight * 0 + space });
    CircleShape dbr4(48.f);
    dbr4.setFillColor(ddbrown);
    dbr4.setPosition({ bwidth * 7.f + space, bheight * 0 + space });
    CircleShape dbr5(48.f);
    dbr5.setFillColor(ddbrown);
    dbr5.setPosition({ bwidth * 0.f + space, bheight * 1.f + space });
    CircleShape dbr6(48.f);
    dbr6.setFillColor(ddbrown);
    dbr6.setPosition({ bwidth * 2.f + space, bheight * 1.f + space });
    CircleShape dbr7(48.f);
    dbr7.setFillColor(ddbrown);
    dbr7.setPosition({ bwidth * 4.f + space, bheight * 1.f + space });
    CircleShape dbr8(48.f);
    dbr8.setFillColor(ddbrown);
    dbr8.setPosition({ bwidth * 6.f + space, bheight * 1.f + space });
    CircleShape dbr9(48.f);
    dbr9.setFillColor(ddbrown);
    dbr9.setPosition({ bwidth * 1.f + space, bheight * 2.f + space });
    CircleShape dbr10(48.f);
    dbr10.setFillColor(ddbrown);
    dbr10.setPosition({ bwidth * 3.f + space, bheight * 2.f + space });
    CircleShape dbr11(48.f);
    dbr11.setFillColor(ddbrown);
    dbr11.setPosition({ bwidth * 5.f + space, bheight * 2.f + space });
    CircleShape dbr12(48.f);
    dbr12.setFillColor(ddbrown);
    dbr12.setPosition({ bwidth * 7.f + space, bheight * 2.f + space });


    CircleShape lbr1(48.f);
    lbr1.setFillColor(llbrown);
    lbr1.setPosition({ bwidth * 0.f + space, bheight * 5.f + space });
    CircleShape lbr2(48.f);
    lbr2.setFillColor(llbrown);
    lbr2.setPosition({ bwidth * 2.f + space, bheight * 5.f + space });
    CircleShape lbr3(48.f);
    lbr3.setFillColor(llbrown);
    lbr3.setPosition({ bwidth * 4.f + space, bheight * 5.f + space });
    CircleShape lbr4(48.f);
    lbr4.setFillColor(llbrown);
    lbr4.setPosition({ bwidth * 6.f + space, bheight * 5.f + space });
    CircleShape lbr5(48.f);
    lbr5.setFillColor(llbrown);
    lbr5.setPosition({ bwidth * 1.f + space, bheight * 6.f + space });
    CircleShape lbr6(48.f);
    lbr6.setFillColor(llbrown);
    lbr6.setPosition({ bwidth * 3.f + space, bheight * 6.f + space });
    CircleShape lbr7(48.f);
    lbr7.setFillColor(llbrown);
    lbr7.setPosition({ bwidth * 5.f + space, bheight * 6.f + space });
    CircleShape lbr8(48.f);
    lbr8.setFillColor(llbrown);
    lbr8.setPosition({ bwidth * 7.f + space, bheight * 6.f + space });
    CircleShape lbr9(48.f);
    lbr9.setFillColor(llbrown);
    lbr9.setPosition({ bwidth * 0.f + space, bheight * 7.f + space });
    CircleShape lbr10(48.f);
    lbr10.setFillColor(llbrown);
    lbr10.setPosition({ bwidth * 2.f + space, bheight * 7.f + space });
    CircleShape lbr11(48.f);
    lbr11.setFillColor(llbrown);
    lbr11.setPosition({ bwidth * 4.f + space, bheight * 7.f + space });
    CircleShape lbr12(48.f);
    lbr12.setFillColor(llbrown);
    lbr12.setPosition({ bwidth * 6.f + space, bheight * 7.f + space });

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
            if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>()) {
                if (keyPressed->scancode == sf::Keyboard::Scancode::Right) {
                    if (lr < 8) {
                        bbox.move({ width / 8.f, 0.f });
                        lr++;
                    }
                }
                if (keyPressed->scancode == sf::Keyboard::Scancode::Left) {
                    if (lr > 1) {
                        bbox.move({ width / -8.f, 0.f });
                        lr--;
                    }
                }
                if (keyPressed->scancode == sf::Keyboard::Scancode::Down) {
                    if (ud < 8) {
                        bbox.move({ 0.f, height / 8.f });
                        ud++;
                    }
                }
                if (keyPressed->scancode == sf::Keyboard::Scancode::Up) {
                    if (ud > 1) {
                        bbox.move({ 0.f, height / -8.f });
                        ud--;
                    }
                }
            }
        }
        window.clear(lbrown);
        for (int i = 0; i <= 7; i++) {
            for (int j = 0; j <= 3; j++) {
                if (i % 2 == 0) {
                    RectangleShape rect({ width / 8.f, height / 8.f });
                    rect.setFillColor(dbrown);
                    rect.setPosition({ (2 * j + 1) * (width / 8.f), i * (height / 8.f) });
                    window.draw(rect);
                }
                else {
                    RectangleShape rect({ width / 8.f, height / 8.f });
                    rect.setFillColor(dbrown);
                    rect.setPosition({ 2 * j * (width / 8.f), i * (height / 8.f) });
                    window.draw(rect);
                }
            }
        }
        window.draw(bbox);
        window.draw(dbr1);
        window.draw(dbr2);
        window.draw(dbr3);
        window.draw(dbr4);
        window.draw(dbr5);
        window.draw(dbr6);
        window.draw(dbr7);
        window.draw(dbr8);
        window.draw(dbr9);
        window.draw(dbr10);
        window.draw(dbr11);
        window.draw(dbr12);
        window.draw(lbr1);
        window.draw(lbr2);
        window.draw(lbr3);
        window.draw(lbr4);
        window.draw(lbr5);
        window.draw(lbr6);
        window.draw(lbr7);
        window.draw(lbr8);
        window.draw(lbr9);
        window.draw(lbr10);
        window.draw(lbr11);
        window.draw(lbr12);
        window.display();
    }
    return 0;
}
