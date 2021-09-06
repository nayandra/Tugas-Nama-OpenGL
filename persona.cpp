#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

float kanan, bawah, theta;
int change, maju;


using namespace std;

/*
 * CLASSES DECLARATION
 */

class Interaksi{
public:
    int x=0;

    void doIfKeyPressed(int key, int action)
    {
    if (key == GLFW_KEY_ENTER && action == GLFW_RELEASE)
            x+=1;
            glfwSetTime(0);
    }
};
Interaksi aksi;

    static void error_callback(int error, const char* description) {
      fputs(description, stderr);
    }
    static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
      if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
      glfwSetWindowShouldClose(window, GL_TRUE);
      aksi.doIfKeyPressed(key, action);
    }

    void setup_viewport(GLFWwindow* window)
{
    // setting viewports size, projection etc
    float ratio;
    int width, height;
    glfwGetFramebufferSize(window, &width, &height);
    ratio = width / (float) height;
    glViewport(0, 0, width, height);

    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 3840, 2160, 0, 1000, -1000);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

    void background1()
    {
    glClearColor(0.169f,0.545f,0.882f, 1.f); //warna background
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0f,0.235f,0.373f);
    glBegin(GL_POLYGON);

        glVertex2f(0, 382.5);
        glVertex2f(0, 0);
        glVertex2f(3840, 0);
        glVertex2f(3840, 629.5);

    glEnd();

    glBegin(GL_POLYGON);

        glVertex2f(3840, 1520.5);
        glVertex2f(3840, 2160);
        glVertex2f(0, 2160);
        glVertex2f(0, 1781.5);

    glEnd();

    glColor3d(0.427f,0.702f,1.f);

    glBegin(GL_POLYGON);

        glVertex2d(3840, 1528);
        glVertex2d(0, 1781.5);
        glVertex2d(0, 1666);
        glVertex2d(3840, 1397.5);

    glEnd();

    glBegin(GL_POLYGON);

        glVertex2d(3840, 726);
        glVertex2d(0, 509.5);
        glVertex2d(0, 388.5);
        glVertex2d(3840, 625.5);

    glEnd();



    }

    void tulisanPressEnter()
    {
        glPushMatrix();

        if(change==1){
            maju +=(2);
            if(maju>300) change=0;
        }
    else {
            maju += (-2);
            if(maju<-200) change=1;
        }

    glTranslatef(maju, 0, 0);

        glColor3f(0., 0., 0.);
        //P
        glBegin(GL_QUADS);

            glVertex2f(922, 1040);
            glVertex2f(948.5f, 1038.68f);
            glVertex2f(956, 1244.5f);
            glVertex2f(927, 1244.5f);

        glEnd();

        glBegin(GL_TRIANGLE_STRIP);

            glVertex2f(952, 1165.5f);
            glVertex2f(952, 1141.5f);
            glVertex2f(1025, 1160);
            glVertex2f(1010, 1138.5f);
            glVertex2f(1045, 1152);
            glVertex2f(1020, 1136);
            glVertex2f(1061.5f, 1136);
            glVertex2f(1035, 1126.5f);
            glVertex2f(1072.5f, 1109.5f);
            glVertex2f(1045, 1109.5f);
            glVertex2f(1072.5f, 1091.5f);
            glVertex2f(1045, 1091.5f);
            glVertex2f(1061.5f, 1064.5f);
            glVertex2f(1039, 1078);
            glVertex2f(1039, 1044);
            glVertex2f(1025, 1064.5f);
            glVertex2f(1012.5f, 1035.5f);
            glVertex2f(1008, 1059);
            glVertex2f(948.5f, 1038.68f);
            glVertex2f(948.5f, 1062.5f);

        glEnd();

        //r
        glBegin(GL_QUADS);

            glVertex2f(1100.5, 1086.5);
            glVertex2f(1127, 1086.5);
            glVertex2f(1130.5, 1237);
            glVertex2f(1106.5, 1237);

        glEnd();

        glBegin(GL_TRIANGLES);

            glVertex2f(1127, 1127);
            glVertex2f(1127, 1103);
            glVertex2f(1142, 1112);

        glEnd();

        glBegin(GL_POLYGON);

            glVertex2f(1142, 1112);
            glVertex2f(1127, 1103);
            glVertex2f(1142, 1086.5);
            glVertex2f(1165.5, 1080.5);
            glVertex2f(1175, 1083.5);
            glVertex2f(1175, 1107);

        glEnd();

        //e
        glBegin(GL_QUADS);

            glVertex2f(1218, 1144.5f);
            glVertex2f(1218, 1166);
            glVertex2f(1320.5f, 1166);
            glVertex2f(1295.5f, 1142.5f);

        glEnd();

        glBegin(GL_TRIANGLE_STRIP);

            glVertex2f(1320.5, 1205);
            glVertex2f(1304, 1193.5);
            glVertex2f(1311, 1217.5);
            glVertex2f(1287, 1208.5);
            glVertex2f(1297, 1228);
            glVertex2f(1272.5, 1213.5);
            glVertex2f(1287, 1232);
            glVertex2f(1251.5, 1213.5);
            glVertex2f(1276, 1235);
            glVertex2f(1237.5, 1207);
            glVertex2f(1251.5, 1236);
            glVertex2f(1229.5, 1199.5);
            glVertex2f(1236, 1233);
            glVertex2f(1223, 1191);
            glVertex2f(1219.5, 1224);
            glVertex2f(1219.5, 1179);
            glVertex2f(1201, 1202.5);
            glVertex2f(1218, 1166);
            glVertex2f(1194, 1183.5);
            glVertex2f(1218, 1144.5);
            glVertex2f(1191, 1156);
            glVertex2f(1219.5, 1132.5);
            glVertex2f(1196.5, 1124);
            glVertex2f(1223, 1124);
            glVertex2f(1210.5, 1099.5);
            glVertex2f(1227, 1117);
            glVertex2f(1223, 1090);
            glVertex2f(1241.5, 1081);

        glEnd();

        glBegin(GL_TRIANGLE_FAN);

            glVertex2f(1241.5, 1081);
            glVertex2f(1227, 1117);
            glVertex2f(1231.5, 1111.5);
            glVertex2f(1237.5, 1106);
            glVertex2f(1244.5, 1102.5);
            glVertex2f(1256, 1099.5);
            glVertex2f(1268, 1101.5);

        glEnd();

        glBegin(GL_TRIANGLE_STRIP);

            glVertex2f(1241.5, 1081);
            glVertex2f(1268, 1101.5);
            glVertex2f(1264, 1079);
            glVertex2f(1276, 1105);
            glVertex2f(1281, 1083);
            glVertex2f(1281, 1109);
            glVertex2f(1297, 1093);
            glVertex2f(1284.5, 1113.5);
            glVertex2f(1307.5, 1105);
            glVertex2f(1289.5, 1121.5);
            glVertex2f(1313.5, 1117);
            glVertex2f(1292, 1129);
            glVertex2f(1318.5, 1132.5);
            glVertex2f(1295, 1142);
            glVertex2f(1320.5, 1149);
            glVertex2f(1320.5, 1163);

        glEnd();

        //s
        glBegin(GL_TRIANGLE_STRIP);

            glVertex2f(1345.5, 1184);
            glVertex2f(1370.5, 1184);
            glVertex2f(1347.5, 1196);
            glVertex2f(1374, 1193.5);
            glVertex2f(1350, 1202);
            glVertex2f(1382.5, 1203.5);
            glVertex2f(1353.5, 1207.5);
            glVertex2f(1399.5, 1210);
            glVertex2f(1357.5, 1213);
            glVertex2f(1363.5, 1218.5);
            glVertex2f(1417, 1210);

        glEnd();

        glBegin(GL_TRIANGLE_FAN);

            glVertex2f(1417, 1210);
            glVertex2f(1363.5, 1218.5);
            glVertex2f(1368.5, 1222.5);
            glVertex2f(1374, 1225);
            glVertex2f(1385, 1229);
            glVertex2f(1395, 1231);
            glVertex2f(1407, 1231.5);
            glVertex2f(1432, 1229);
            glVertex2f(1449, 1220.5);
            glVertex2f(1458.5, 1214);

        glEnd();

        glBegin(GL_TRIANGLE_STRIP);

            glVertex2f(1417, 1210);;
            glVertex2f(1458.5, 1214);
            glVertex2f(1432, 1203.5);
            glVertex2f(1458.5, 1214);
            glVertex2f(1438, 1197);
            glVertex2f(1463, 1203.5);
            glVertex2f(1440.5, 1184);

        glEnd();

        glBegin(GL_TRIANGLE_FAN);

            glVertex2f(1440.5, 1184);
            glVertex2f(1463, 1203.5);
            glVertex2f(1466.5, 1195);
            glVertex2f(1466.5, 1184);
            glVertex2f(1464.5, 1172);
            glVertex2f(1458.5, 1162.5);
            glVertex2f(1450.5, 1155);
            glVertex2f(1438, 1148);

        glEnd();

        glBegin(GL_TRIANGLE_STRIP);

            glVertex2f(1440.5, 1184);
            glVertex2f(1438, 1148);
            glVertex2f(1432, 1170.5);
            glVertex2f(1408, 1139.5);
            glVertex2f(1408, 1162.5);
            glVertex2f(1382.5, 1132.5);
            glVertex2f(1374, 1155);
            glVertex2f(1377.5, 1129);
            glVertex2f(1364.5, 1150);
            glVertex2f(1376, 1125);

        glEnd();

        glBegin(GL_TRIANGLE_FAN);

            glVertex2f(1376, 1125);
            glVertex2f(1364.5, 1150);
            glVertex2f(1359, 1145);
            glVertex2f(1354.5, 1139.5);
            glVertex2f(1350, 1132.5);
            glVertex2f(1348.5, 1126.5);
            glVertex2f(1348.5, 1119.5);

        glEnd();

        glBegin(GL_TRIANGLE_STRIP);

            glVertex2f(1376, 1125);
            glVertex2f(1348.5, 1119.5);
            glVertex2f(1375.5, 1115);
            glVertex2f(1350, 1107.5);
            glVertex2f(1377.5, 1110);
            glVertex2f(1353, 1100);
            glVertex2f(1379, 1106.5);
            glVertex2f(1359, 1091.5);
            glVertex2f(1381.5, 1103);
            glVertex2f(1370.5, 1082);
            glVertex2f(1386, 1099);
            glVertex2f(1382.5, 1076);
            glVertex2f(1393, 1097);
            glVertex2f(1399.5, 1073.5);
            glVertex2f(1404.5, 1096);
            glVertex2f(1419.5, 1073.5);
            glVertex2f(1412, 1096);
            glVertex2f(1435, 1078.5);
            glVertex2f(1418.5, 1097);
            glVertex2f(1447.5, 1086.5);
            glVertex2f(1427.5, 1102.5);
            glVertex2f(1455, 1096);
            glVertex2f(1433.5, 1108.5);
            glVertex2f(1460.5, 1105);
            glVertex2f(1436.5, 1115);
            glVertex2f(1463, 1119.5);
            glVertex2f(1436.5, 1120);

        glEnd();

        //s lagi
        glPushMatrix();

        glTranslatef(146.5, -5.5, 0);

        glBegin(GL_TRIANGLE_STRIP);

            glVertex2f(1345.5, 1184);
            glVertex2f(1370.5, 1184);
            glVertex2f(1347.5, 1196);
            glVertex2f(1374, 1193.5);
            glVertex2f(1350, 1202);
            glVertex2f(1382.5, 1203.5);
            glVertex2f(1353.5, 1207.5);
            glVertex2f(1399.5, 1210);
            glVertex2f(1357.5, 1213);
            glVertex2f(1363.5, 1218.5);
            glVertex2f(1417, 1210);

        glEnd();

        glBegin(GL_TRIANGLE_FAN);

            glVertex2f(1417, 1210);
            glVertex2f(1363.5, 1218.5);
            glVertex2f(1368.5, 1222.5);
            glVertex2f(1374, 1225);
            glVertex2f(1385, 1229);
            glVertex2f(1395, 1231);
            glVertex2f(1407, 1231.5);
            glVertex2f(1432, 1229);
            glVertex2f(1449, 1220.5);
            glVertex2f(1458.5, 1214);

        glEnd();

        glBegin(GL_TRIANGLE_STRIP);

            glVertex2f(1417, 1210);;
            glVertex2f(1458.5, 1214);
            glVertex2f(1432, 1203.5);
            glVertex2f(1458.5, 1214);
            glVertex2f(1438, 1197);
            glVertex2f(1463, 1203.5);
            glVertex2f(1440.5, 1184);

        glEnd();

        glBegin(GL_TRIANGLE_FAN);

            glVertex2f(1440.5, 1184);
            glVertex2f(1463, 1203.5);
            glVertex2f(1466.5, 1195);
            glVertex2f(1466.5, 1184);
            glVertex2f(1464.5, 1172);
            glVertex2f(1458.5, 1162.5);
            glVertex2f(1450.5, 1155);
            glVertex2f(1438, 1148);

        glEnd();

        glBegin(GL_TRIANGLE_STRIP);

            glVertex2f(1440.5, 1184);
            glVertex2f(1438, 1148);
            glVertex2f(1432, 1170.5);
            glVertex2f(1408, 1139.5);
            glVertex2f(1408, 1162.5);
            glVertex2f(1382.5, 1132.5);
            glVertex2f(1374, 1155);
            glVertex2f(1377.5, 1129);
            glVertex2f(1364.5, 1150);
            glVertex2f(1376, 1125);

        glEnd();

        glBegin(GL_TRIANGLE_FAN);

            glVertex2f(1376, 1125);
            glVertex2f(1364.5, 1150);
            glVertex2f(1359, 1145);
            glVertex2f(1354.5, 1139.5);
            glVertex2f(1350, 1132.5);
            glVertex2f(1348.5, 1126.5);
            glVertex2f(1348.5, 1119.5);

        glEnd();

        glBegin(GL_TRIANGLE_STRIP);

            glVertex2f(1376, 1125);
            glVertex2f(1348.5, 1119.5);
            glVertex2f(1375.5, 1115);
            glVertex2f(1350, 1107.5);
            glVertex2f(1377.5, 1110);
            glVertex2f(1353, 1100);
            glVertex2f(1379, 1106.5);
            glVertex2f(1359, 1091.5);
            glVertex2f(1381.5, 1103);
            glVertex2f(1370.5, 1082);
            glVertex2f(1386, 1099);
            glVertex2f(1382.5, 1076);
            glVertex2f(1393, 1097);
            glVertex2f(1399.5, 1073.5);
            glVertex2f(1404.5, 1096);
            glVertex2f(1419.5, 1073.5);
            glVertex2f(1412, 1096);
            glVertex2f(1435, 1078.5);
            glVertex2f(1418.5, 1097);
            glVertex2f(1447.5, 1086.5);
            glVertex2f(1427.5, 1102.5);
            glVertex2f(1455, 1096);
            glVertex2f(1433.5, 1108.5);
            glVertex2f(1460.5, 1105);
            glVertex2f(1436.5, 1115);
            glVertex2f(1463, 1119.5);
            glVertex2f(1436.5, 1120);

        glEnd();

        glPopMatrix();

        //E
        glBegin(GL_QUADS);

            glVertex2f(1719, 1012);
            glVertex2f(1725, 1217.5);
            glVertex2f(1751.5, 1216.79);
            glVertex2f(1747, 1011.46);

        glEnd();

        glBegin(GL_QUADS);

            glVertex2f(1747, 1011.46);
            glVertex2f(1747, 1037.5);
            glVertex2f(1848.5, 1032);
            glVertex2f(1848.5, 1009.5);

        glEnd();

        glBegin(GL_QUADS);

            glVertex2f(1751.5, 1098.5);
            glVertex2f(1751.5, 1123);
            glVertex2f(1837.5, 1119.5);
            glVertex2f(1837.5, 1097);

        glEnd();

        glBegin(GL_QUADS);

            glVertex2f(1751.5, 1193.5);
            glVertex2f(1855, 1192);
            glVertex2f(1855, 1214);
            glVertex2f(1751.5, 1216.79);

        glEnd();

        glBegin(GL_LINES);

            glVertex2f(1751.5, 1098.5);
            glVertex2f(1751.5, 1123);

        glEnd();



        //n
        glBegin(GL_QUADS);

            glVertex2f(1880.5, 1059);
            glVertex2f(1884.5, 1212.5);
            glVertex2f(1910.5, 1212.5);
            glVertex2f(1906.5, 1059);

        glEnd();

        glBegin(GL_TRIANGLE_STRIP);

            glVertex2f(1907, 1106);
            glVertex2f(1906.5, 1078);
            glVertex2f(1911.5, 1095.5);
            glVertex2f(1911.5, 1071.5);
            glVertex2f(1919.5, 1086.5);
            glVertex2f(1919.5, 1062.5);
            glVertex2f(1933, 1081);
            glVertex2f(1938.5, 1054.5);
            glVertex2f(1943, 1078);
            glVertex2f(1959.5, 1054.5);
            glVertex2f(1964, 1082.5);
            glVertex2f(1979.5, 1062.5);
            glVertex2f(1972, 1095.5);
            glVertex2f(1992, 1073);
            glVertex2f(1974.5, 1104.5);

        glEnd();

        glBegin(GL_TRIANGLE_FAN);

            glVertex2f(1974.5, 1104.5);
            glVertex2f(1992, 1073);
            glVertex2f(1996, 1082.5);
            glVertex2f(2000.5, 1091.5);
            glVertex2f(2000.5, 1104.5);

        glEnd();

        glBegin(GL_QUADS);

            glVertex2f(2000.5, 1104.5);
            glVertex2f(1974.5, 1104.5);
            glVertex2f(1978, 1210.5);
            glVertex2f(2003.5, 1209);

        glEnd();

        //t
        glBegin(GL_QUADS);

            glVertex2f(2047, 1019.5);
            glVertex2f(2072.5, 1018.5);
            glVertex2f(2073.5, 1055.5);
            glVertex2f(2048, 1056);

        glEnd();

        glBegin(GL_QUADS);

            glVertex2f(2048, 1056);
            glVertex2f(2073.5, 1055.5);
            glVertex2f(2074.5, 1076);
            glVertex2f(2048.5, 1076);

        glEnd();

        glBegin(GL_QUADS);

            glVertex2f(2074.5, 1076);
            glVertex2f(2048.5, 1076);
            glVertex2f(2051.5, 1173.5);
            glVertex2f(2077.5, 1173.5);

        glEnd();

        glBegin(GL_QUADS);

            glVertex2f(2048, 1056);
            glVertex2f(2020.5, 1057);
            glVertex2f(2020.5, 1077);
            glVertex2f(2048.5, 1076);

        glEnd();

        glBegin(GL_QUADS);

            glVertex2f(2102.5, 1054.5);
            glVertex2f(2073.5, 1055.5);
            glVertex2f(2074.5, 1076);
            glVertex2f(2102.5, 1074.5);

        glEnd();

        glBegin(GL_TRIANGLE_STRIP);

            glVertex2f(2051.5, 1173.5);
            glVertex2f(2077.5, 1173.5);
            glVertex2f(2053, 1184);
            glVertex2f(2080, 1181);
            glVertex2f(2056, 1192.5);
            glVertex2f(2083, 1185.5);
            glVertex2f(2060, 1199);
            glVertex2f(2088.5, 1187);
            glVertex2f(2066.5, 1205);
            glVertex2f(2094, 1188);
            glVertex2f(2072, 1208);
            glVertex2f(2099.5, 1187);

        glEnd();

        glBegin(GL_TRIANGLE_FAN);

            glVertex2f(2099.5, 1187);
            glVertex2f(2072, 1208);
            glVertex2f(2077.5, 1209);
            glVertex2f(2083, 1210);
            glVertex2f(2090, 1210);
            glVertex2f(2098.5, 1210);
            glVertex2f(2107.5, 1207);
            glVertex2f(2106.5, 1185.5);

        glEnd();

        //e lagi guuuyyss
        glPushMatrix();

        glTranslatef(938, -29, 0);

        glBegin(GL_QUADS);

            glVertex2f(1218, 1144.5f);
            glVertex2f(1218, 1166);
            glVertex2f(1320.5f, 1166);
            glVertex2f(1295.5f, 1142.5f);

        glEnd();

        glBegin(GL_TRIANGLE_STRIP);

            glVertex2f(1320.5, 1205);
            glVertex2f(1304, 1193.5);
            glVertex2f(1311, 1217.5);
            glVertex2f(1287, 1208.5);
            glVertex2f(1297, 1228);
            glVertex2f(1272.5, 1213.5);
            glVertex2f(1287, 1232);
            glVertex2f(1251.5, 1213.5);
            glVertex2f(1276, 1235);
            glVertex2f(1237.5, 1207);
            glVertex2f(1251.5, 1236);
            glVertex2f(1229.5, 1199.5);
            glVertex2f(1236, 1233);
            glVertex2f(1223, 1191);
            glVertex2f(1219.5, 1224);
            glVertex2f(1219.5, 1179);
            glVertex2f(1201, 1202.5);
            glVertex2f(1218, 1166);
            glVertex2f(1194, 1183.5);
            glVertex2f(1218, 1144.5);
            glVertex2f(1191, 1156);
            glVertex2f(1219.5, 1132.5);
            glVertex2f(1196.5, 1124);
            glVertex2f(1223, 1124);
            glVertex2f(1210.5, 1099.5);
            glVertex2f(1227, 1117);
            glVertex2f(1223, 1090);
            glVertex2f(1241.5, 1081);

        glEnd();

        glBegin(GL_TRIANGLE_FAN);

            glVertex2f(1241.5, 1081);
            glVertex2f(1227, 1117);
            glVertex2f(1231.5, 1111.5);
            glVertex2f(1237.5, 1106);
            glVertex2f(1244.5, 1102.5);
            glVertex2f(1256, 1099.5);
            glVertex2f(1268, 1101.5);

        glEnd();

        glBegin(GL_TRIANGLE_STRIP);

            glVertex2f(1241.5, 1081);
            glVertex2f(1268, 1101.5);
            glVertex2f(1264, 1079);
            glVertex2f(1276, 1105);
            glVertex2f(1281, 1083);
            glVertex2f(1281, 1109);
            glVertex2f(1297, 1093);
            glVertex2f(1284.5, 1113.5);
            glVertex2f(1307.5, 1105);
            glVertex2f(1289.5, 1121.5);
            glVertex2f(1313.5, 1117);
            glVertex2f(1292, 1129);
            glVertex2f(1318.5, 1132.5);
            glVertex2f(1295, 1142);
            glVertex2f(1320.5, 1149);
            glVertex2f(1320.5, 1163);

        glEnd();

        glPopMatrix();

        //r again ikuzoooo
        glPushMatrix();

        glTranslatef(1184.5, -35.5, 0);

        glBegin(GL_QUADS);

            glVertex2f(1100.5, 1086.5);
            glVertex2f(1127, 1086.5);
            glVertex2f(1130.5, 1237);
            glVertex2f(1106.5, 1237);

        glEnd();

        glBegin(GL_TRIANGLES);

            glVertex2f(1127, 1127);
            glVertex2f(1127, 1103);
            glVertex2f(1142, 1112);

        glEnd();

        glBegin(GL_POLYGON);

            glVertex2f(1142, 1112);
            glVertex2f(1127, 1103);
            glVertex2f(1142, 1086.5);
            glVertex2f(1165.5, 1080.5);
            glVertex2f(1175, 1083.5);
            glVertex2f(1175, 1107);

        glEnd();

        glPopMatrix();




        glPopMatrix();

    }

    void background2()
    {
    glClearColor(0.169f,0.545f,0.882f, 1.f); //warna background
    glClear(GL_COLOR_BUFFER_BIT);

    //*******LATAR*******\\
    //Segitiga atas
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f,0.235f,0.373f);
        glVertex2d(0, 0);
        glVertex2d(1633, 0);
        glVertex2d(0, 1634);

    glEnd();

    //Trapesium
    glBegin(GL_QUADS);

    glColor3d(0.427f,0.702f,1.f);
        glVertex2d(1969, 0);
        glVertex2d(0, 1969);
        glVertex2d(0, 1634);
        glVertex2d(1633, 0);

    glEnd();


    //Belakang Rian
    glBegin(GL_QUADS);

        glVertex2f(1519.5, 450);
        glVertex2f(1131, 832);
        glVertex2f(3840, 832);
        glVertex2f(3840, 450);

    glEnd();

    //Belakakng Grafkom
    glColor3f(0.0f,0.235f,0.373f);
    glBegin(GL_QUADS);

        glVertex2d(1137.5f, 832);
        glVertex2d(3840, 832);
        glVertex2d(3840, 914.5f);
        glVertex2d(1055, 914.5f);

    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

        glVertex2f(1969, 832);
        glVertex2f(2612, 832);
        glVertex2f(2665.5, 873);
        glVertex2f(2612, 914.5);
        glVertex2f(1969, 914.5);

    glEnd();

    glColor3f(0.0f,0.235f,0.373f);

    glBegin(GL_TRIANGLES);

        glVertex2f(1969, 914.5);
        glVertex2f(1969, 832);
        glVertex2f(2008, 873);

    glEnd();

    //Panah
    glPushMatrix();

    if(change==1){
            maju +=(2);
            if(maju>300) change=0;
        }
    else {
            maju += (-2);
            if(maju<-200) change=1;
        }

    glTranslatef(maju, 0, 0);

    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);

        glVertex2f(2585, 832);
        glVertex2f(2621.5, 832);
        glVertex2f(2674.5, 873);
        glVertex2f(2638.5, 873);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2f(2585, 914.5);
        glVertex2f(2621.5, 914.5);
        glVertex2f(2674.5, 873);
        glVertex2f(2638.5, 873);

    glEnd();

    kanan=219;

    glPushMatrix();
    glTranslatef(kanan, 0, 0);

    glBegin(GL_QUADS);

        glVertex2f(2585, 832);
        glVertex2f(2621.5, 832);
        glVertex2f(2674.5, 873);
        glVertex2f(2638.5, 873);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2f(2585, 914.5);
        glVertex2f(2621.5, 914.5);
        glVertex2f(2674.5, 873);
        glVertex2f(2638.5, 873);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(kanan*2, 0, 0);

    glBegin(GL_QUADS);

        glVertex2f(2585, 832);
        glVertex2f(2621.5, 832);
        glVertex2f(2674.5, 873);
        glVertex2f(2638.5, 873);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2f(2585, 914.5);
        glVertex2f(2621.5, 914.5);
        glVertex2f(2674.5, 873);
        glVertex2f(2638.5, 873);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(kanan*3, 0, 0);

    glBegin(GL_QUADS);

        glVertex2f(2585, 832);
        glVertex2f(2621.5, 832);
        glVertex2f(2674.5, 873);
        glVertex2f(2638.5, 873);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2f(2585, 914.5);
        glVertex2f(2621.5, 914.5);
        glVertex2f(2674.5, 873);
        glVertex2f(2638.5, 873);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(kanan*4, 0, 0);

    glBegin(GL_QUADS);

        glVertex2f(2585, 832);
        glVertex2f(2621.5, 832);
        glVertex2f(2674.5, 873);
        glVertex2f(2638.5, 873);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2f(2585, 914.5);
        glVertex2f(2621.5, 914.5);
        glVertex2f(2674.5, 873);
        glVertex2f(2638.5, 873);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(kanan*5, 0, 0);

    glBegin(GL_QUADS);

        glVertex2f(2585, 832);
        glVertex2f(2621.5, 832);
        glVertex2f(2674.5, 873);
        glVertex2f(2638.5, 873);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2f(2585, 914.5);
        glVertex2f(2621.5, 914.5);
        glVertex2f(2674.5, 873);
        glVertex2f(2638.5, 873);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(kanan*6, 0, 0);

    glBegin(GL_QUADS);

        glVertex2f(2585, 832);
        glVertex2f(2621.5, 832);
        glVertex2f(2674.5, 873);
        glVertex2f(2638.5, 873);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2f(2585, 914.5);
        glVertex2f(2621.5, 914.5);
        glVertex2f(2674.5, 873);
        glVertex2f(2638.5, 873);

    glEnd();

    glPopMatrix();

    glPopMatrix();

    //Garis Bawah Huruf
    glColor3d(0.286f,0.643f,1.f);

    glBegin(GL_QUADS);

        glVertex2d(1037.23f, 932.5f);
        glVertex2d(1054.22f, 915.5f);
        glVertex2d(2706, 915.5f);
        glVertex2d(2706, 932.5f);

    glEnd();
    }

    //*******NAMA*******\\

    void tulisanNama()
    {
    //R
    glBegin(GL_QUADS);

    glColor3d(1.f,1.f,1.f);
        glVertex2d(1524.f, 550.5f);
        glVertex2d(1524.f, 819.f);
        glVertex2d(1567.5f, 819.f);
        glVertex2d(1567.5f, 550.5);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2d(1793.5f, 550.5f);
        glVertex2d(1793.5f, 505.f);
        glVertex2d(1567.5f, 505.f);
        glVertex2d(1567.5f, 550.5);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2d(1793.5f, 550.5f);
        glVertex2d(1793.5f, 639.5f);
        glVertex2d(1837.5f, 639.5f);
        glVertex2d(1837.5f, 550.5);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2d(1793.5f, 683.5f);
        glVertex2d(1793.5f, 639.5f);
        glVertex2d(1654.5f, 639.5f);
        glVertex2d(1654.5f, 683.5);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2d(1611.f, 683.5f);
        glVertex2d(1611.5f, 774.5f);
        glVertex2d(1654.5f, 774.5f);
        glVertex2d(1654.5f, 683.5);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2d(1839.f, 774.5f);
        glVertex2d(1839.f, 819.f);
        glVertex2d(1654.5f, 819.f);
        glVertex2d(1654.5f, 774.5);

    glEnd();

    //
    glBegin(GL_LINE_LOOP);

    glColor3f(0.0f,0.235f,0.373f);
        glVertex2d(1524.f, 550.5f);
        glVertex2d(1524.f, 819.f);
        glVertex2d(1567.5f, 819.f);
        glVertex2d(1567.5f, 550.5);

    glEnd();

    glBegin(GL_LINE_LOOP);

        glVertex2d(1793.5f, 550.5f);
        glVertex2d(1793.5f, 505.f);
        glVertex2d(1567.5f, 505.f);
        glVertex2d(1567.5f, 550.5);

    glEnd();

    glBegin(GL_LINE_LOOP);

        glVertex2d(1793.5f, 550.5f);
        glVertex2d(1793.5f, 639.5f);
        glVertex2d(1837.5f, 639.5f);
        glVertex2d(1837.5f, 550.5);

    glEnd();

    glBegin(GL_LINE_LOOP);

        glVertex2d(1793.5f, 683.5f);
        glVertex2d(1793.5f, 639.5f);
        glVertex2d(1654.5f, 639.5f);
        glVertex2d(1654.5f, 683.5);

    glEnd();

    glBegin(GL_LINE_LOOP);

        glVertex2d(1611.f, 683.5f);
        glVertex2d(1611.5f, 774.5f);
        glVertex2d(1654.5f, 774.5f);
        glVertex2d(1654.5f, 683.5);

    glEnd();

    glBegin(GL_LINE_LOOP);

        glVertex2d(1839.f, 774.5f);
        glVertex2d(1839.f, 819.f);
        glVertex2d(1654.5f, 819.f);
        glVertex2d(1654.5f, 774.5);

    glEnd();
    //

    //I
    glBegin(GL_QUADS);
    glColor3d(1.f,1.f,1.f);
        glVertex2d(1853.f, 505.f);
        glVertex2d(1853.f, 819.f);
        glVertex2d(1896.5f, 819.f);
        glVertex2d(1896.5f, 505.f);

    glEnd();

    //
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f,0.235f,0.373f);
        glVertex2d(1853.f, 505.f);
        glVertex2d(1853.f, 819.f);
        glVertex2d(1896.5f, 819.f);
        glVertex2d(1896.5f, 505.f);

    glEnd();
    //

    //A
    glBegin(GL_QUADS);

    glColor3d(1.f,1.f,1.f);
        glVertex2d(1912.5f, 550.5f);
        glVertex2d(1912.5f, 819.f);
        glVertex2d(1956.f, 819.f);
        glVertex2d(1956.f, 550.5);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2d(2182.f, 550.5f);
        glVertex2d(2182.f, 505.f);
        glVertex2d(1956.f, 505.f);
        glVertex2d(1956.f, 550.5);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(0.0f,0.235f,0.373f);
        glVertex2d(2182.f, 550.5f);
        glVertex2d(2225.5f, 550.5f);
        glVertex2d(2225.5f, 819.f);
        glVertex2d(2182.f, 819.f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1999.5f, 683.5f);
        glVertex2d(1999.5f, 639.5f);
        glVertex2d(2182.f, 639.5f);
        glVertex2d(2182.f, 683.5f);

    glEnd();

    //
    glBegin(GL_LINE_LOOP);

    glColor3f(0.0f,0.235f,0.373f);
        glVertex2d(1912.5f, 550.5f);
        glVertex2d(1912.5f, 819.f);
        glVertex2d(1956.f, 819.f);
        glVertex2d(1956.f, 550.5);

    glEnd();

    glBegin(GL_LINE_LOOP);

        glVertex2d(2182.f, 550.5f);
        glVertex2d(2182.f, 505.f);
        glVertex2d(1956.f, 505.f);
        glVertex2d(1956.f, 550.5);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glColor3f(0.0f,0.235f,0.373f);
        glVertex2d(2182.f, 550.5f);
        glVertex2d(2225.5f, 550.5f);
        glVertex2d(2225.5f, 819.f);
        glVertex2d(2182.f, 819.f);

    glEnd();

    glBegin(GL_LINE_LOOP);
        glVertex2d(1999.5f, 683.5f);
        glVertex2d(1999.5f, 639.5f);
        glVertex2d(2182.f, 639.5f);
        glVertex2d(2182.f, 683.5f);

    glEnd();
    //

    glBegin(GL_LINE_LOOP);

    glColor3d(1.f,1.f,1.f);
        glVertex2d(2182.f, 550.5f);
        glVertex2d(2182.f, 639.5f);
        glVertex2d(1999.5f, 639.5f);
        glVertex2d(1999.5f, 683.5f);
        glVertex2d(2182.f, 683.5f);


        glVertex2d(2182.f, 819.f);
        glVertex2d(2225.5f, 819.f);
        glVertex2d(2225.5f, 550.5f);

    glEnd();


    //
    //N
    glBegin(GL_QUADS);

    glColor3f(0.0f,0.235f,0.373f);
        glVertex2d(2241.5f, 819.f);
        glVertex2d(2241.5f, 550.5f);
        glVertex2d(2285.f, 550.5f);
        glVertex2d(2285.f, 819.f);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2d(2374.5f, 505.f);
        glVertex2d(2374.5f, 550.5f);
        glVertex2d(2285.f, 550.5f);
        glVertex2d(2285.f, 505.f);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2d(2374.5f, 773.5f);
        glVertex2d(2374.5f, 550.5f);
        glVertex2d(2417.5f, 550.5f);
        glVertex2d(2417.5f, 773.5f);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2d(2506.5f, 773.5f);
        glVertex2d(2506.5f, 819.5f);
        glVertex2d(2417.5f, 819.f);
        glVertex2d(2417.5f, 773.5f);

    glEnd();

    glBegin(GL_QUADS);

        glVertex2d(2506.5f, 773.5f);
        glVertex2d(2506.5f, 505.f);
        glVertex2d(2550.f, 505.f);
        glVertex2d(2550.f, 773.5f);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glColor3f(1.f,1.f,1.f);
        glVertex2d(2241.5f, 819.f);
        glVertex2d(2241.5f, 550.5f);
        glVertex2d(2285.f, 550.5f);
        glVertex2d(2285.f, 819.f);

    glEnd();

    glBegin(GL_LINE_LOOP);

        glVertex2d(2374.5f, 505.f);
        glVertex2d(2374.5f, 550.5f);
        glVertex2d(2285.f, 550.5f);
        glVertex2d(2285.f, 505.f);

    glEnd();

    glBegin(GL_LINE_LOOP);

        glVertex2d(2374.5f, 773.5f);
        glVertex2d(2374.5f, 550.5f);
        glVertex2d(2417.5f, 550.5f);
        glVertex2d(2417.5f, 773.5f);

    glEnd();

    glBegin(GL_LINE_LOOP);

        glVertex2d(2506.5f, 773.5f);
        glVertex2d(2506.5f, 819.5f);
        glVertex2d(2417.5f, 819.f);
        glVertex2d(2417.5f, 773.5f);

    glEnd();

        glBegin(GL_LINE_LOOP);

        glVertex2d(2506.5f, 773.5f);
        glVertex2d(2506.5f, 505.f);
        glVertex2d(2550.f, 505.f);
        glVertex2d(2550.f, 773.5f);

    glEnd();
    }

    //*******Tulisan Bawah*******\\

    void tulisanGrafkom()
    {
    //---------GRAFIKA---------\\
    //G
    glColor3d(1.f,1.f,1.f);
    glBegin(GL_QUADS);
        glVertex2d(1525, 854.5f);
        glVertex2d(1525, 903);
        glVertex2d(1533.5f, 903);
        glVertex2d(1533.5f, 854.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1581.5f, 854.5f);
        glVertex2d(1581.5f, 846.5f);
        glVertex2d(1533.5f, 846.5f);
        glVertex2d(1533.5f, 854.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1573.5f, 895.f);
        glVertex2d(1573.5f, 903.f);
        glVertex2d(1533.5f, 903.f);
        glVertex2d(1533.5f, 895.f);

    glEnd();

     glBegin(GL_QUADS);
        glVertex2d(1573.5f, 895.f);
        glVertex2d(1573.5f, 871.5f);
        glVertex2d(1581.5f, 871.5f);
        glVertex2d(1581.5f, 895.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1542.f, 878.5f);
        glVertex2d(1542.f, 871.5f);
        glVertex2d(1573.5f, 871.5f);
        glVertex2d(1573.5f, 878.5f);

    glEnd();

    //R
    glBegin(GL_QUADS);
        glVertex2d(1583.5f, 854.5f);
        glVertex2d(1583.5f, 903);
        glVertex2d(1592, 903);
        glVertex2d(1592, 854.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1592, 854.5f);
        glVertex2d(1592, 846.5f);
        glVertex2d(1632, 846.5f);
        glVertex2d(1632, 854.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1632, 854.5f);
        glVertex2d(1640.5f, 854.5f);
        glVertex2d(1640.5f, 871.5f);
        glVertex2d(1632, 871.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1632, 871.5f);
        glVertex2d(1632, 878.5f);
        glVertex2d(1609, 878.5f);
        glVertex2d(1609, 871.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1609, 878.5f);
        glVertex2d(1600.5f, 878.5f);
        glVertex2d(1600.5f, 895);
        glVertex2d(1609, 895);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1609, 895);
        glVertex2d(1609, 903);
        glVertex2d(1640.5f, 903);
        glVertex2d(1640.5f, 895);

    glEnd();

    //A
    glBegin(GL_QUADS);
        glVertex2d(1642, 854.5f);
        glVertex2d(1642, 903);
        glVertex2d(1650.5f, 903);
        glVertex2d(1650.5f, 854.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1650.5f, 854.5f);
        glVertex2d(1650.5f, 846.5f);
        glVertex2d(1690.5f, 846.5f);
        glVertex2d(1690.5f, 854.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1690.5f, 854.5f);
        glVertex2d(1699, 854.5f);
        glVertex2d(1699, 903);
        glVertex2d(1690.5f, 903);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1690.5f, 871.5f);
        glVertex2d(1690.5f, 878.5f);
        glVertex2d(1659, 878.5f);
        glVertex2d(1659, 871.5f);

    glEnd();

    //F

    glBegin(GL_QUADS);
        glVertex2d(1701.5f, 854.5f);
        glVertex2d(1710, 854.5f);
        glVertex2d(1710, 903);
        glVertex2d(1701.5f, 903);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1710, 854.5f);
        glVertex2d(1758, 854.5f);
        glVertex2d(1758, 846.5f);
        glVertex2d(1710, 846.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1710, 871.5f);
        glVertex2d(1750, 871.5f);
        glVertex2d(1750, 878.5f);
        glVertex2d(1710, 878.8f);

    glEnd();

    //I

    glBegin(GL_QUADS);
        glVertex2d(1760, 846.5f);
        glVertex2d(1768.5f, 846.5f);
        glVertex2d(1768.5f, 903);
        glVertex2d(1760, 903);

    glEnd();

    //K
    glBegin(GL_QUADS);
        glVertex2d(1779, 846.5f);
        glVertex2d(1770, 846.5f);
        glVertex2d(1770, 903);
        glVertex2d(1779, 903);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1779, 871.5f);
        glVertex2d(1819, 871.5f);
        glVertex2d(1819, 878.5f);
        glVertex2d(1779, 878.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1803, 871.5f);
        glVertex2d(1811, 871.5f);
        glVertex2d(1811, 863.5f);
        glVertex2d(1803, 863.5f);

    glEnd();

   glBegin(GL_QUADS);
        glVertex2d(1819, 855.5f);
        glVertex2d(1811, 855.5f);
        glVertex2d(1811, 863.5f);
        glVertex2d(1819, 863.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1819, 855.5f);
        glVertex2d(1819, 846.5f);
        glVertex2d(1827.5f, 846.5f);
        glVertex2d(1827.5f, 855.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1827.5f, 878.5f);
        glVertex2d(1819, 878.5f);
        glVertex2d(1819, 903);
        glVertex2d(1827.5f, 903);

    glEnd();

    //A

    glBegin(GL_QUADS);
        glVertex2d(1838, 854.5f);
        glVertex2d(1838, 903);
        glVertex2d(1829.5f, 903);
        glVertex2d(1829.5f, 854.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1838, 854.5f);
        glVertex2d(1838, 846.5f);
        glVertex2d(1878, 846.5f);
        glVertex2d(1878, 854.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1878, 854.5f);
        glVertex2d(1878, 903);
        glVertex2d(1886.5f, 903);
        glVertex2d(1886.5f, 854.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(1878, 871.5f);
        glVertex2d(1878, 878.5f);
        glVertex2d(1846.5f, 878.5f);
        glVertex2d(1846.5f, 871.5f);

    glEnd();

    //---------KOMPUTER---------\\

    glColor3f(0.0f,0.235f,0.373f);
    //K
    glBegin(GL_QUADS);
        glVertex2d(2082, 846.5f);
        glVertex2d(2082, 903);
        glVertex2d(2090.5f, 903);
        glVertex2d(2090.5f, 846.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2130.5f, 871.5f);
        glVertex2d(2130.5f, 878.5f);
        glVertex2d(2090.5f, 878.5f);
        glVertex2d(2090.5f, 871.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2114.5f, 871.5f);
        glVertex2d(2114.5f, 863.5f);
        glVertex2d(2122.5f, 863.5f);
        glVertex2d(2122.5f, 871.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2122.5f, 863.5f);
        glVertex2d(2122.5f, 855.5f);
        glVertex2d(2130.5f, 855.5f);
        glVertex2d(2130.5f, 863.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2130.5f, 855.5f);
        glVertex2d(2130.5f, 846.5f);
        glVertex2d(2139, 846.5f);
        glVertex2d(2139, 855.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2139, 903);
        glVertex2d(2139, 878.5f);
        glVertex2d(2130.5f, 878.5f);
        glVertex2d(2130.5f, 903);

    glEnd();

    //O
    glBegin(GL_QUADS);
        glVertex2d(2141, 854.5f);
        glVertex2d(2141, 895);
        glVertex2d(2149.5f, 895);
        glVertex2d(2149.5f, 854.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2149.5f, 846.5f);
        glVertex2d(2149.5f, 854.5f);
        glVertex2d(2189.5f, 854.5f);
        glVertex2d(2189.5f, 846.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2198, 854.5f);
        glVertex2d(2198, 895);
        glVertex2d(2189.5f, 895);
        glVertex2d(2189.5f, 854.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2149.5f, 895);
        glVertex2d(2149.5f, 903);
        glVertex2d(2189.5f, 903);
        glVertex2d(2189.5f, 895);

    glEnd();

    //M
    glBegin(GL_QUADS);
        glVertex2d(2200, 903);
        glVertex2d(2200, 854.5f);
        glVertex2d(2208.5f, 854.5f);
        glVertex2d(2208.5f, 903);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2208.5f, 846.5f);
        glVertex2d(2208.5f, 854.5f);
        glVertex2d(2224, 854.5f);
        glVertex2d(2224, 846.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2224, 903);
        glVertex2d(2224, 854.5f);
        glVertex2d(2233, 854.5f);
        glVertex2d(2233, 903);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2248.5f, 846.5f);
        glVertex2d(2248.5f, 854.5f);
        glVertex2d(2233, 854.5f);
        glVertex2d(2233, 846.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2248.5f, 903);
        glVertex2d(2248.5f, 854.5f);
        glVertex2d(2257, 854.5f);
        glVertex2d(2257, 903);

    glEnd();

    //P
    glBegin(GL_QUADS);
        glVertex2d(2259, 846.5f);
        glVertex2d(2259, 854.5f);
        glVertex2d(2307.5f, 854.5f);
        glVertex2d(2307.5f, 846.5);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2307.5f, 871.5f);
        glVertex2d(2307.5f, 854.5f);
        glVertex2d(2316, 854.5f);
        glVertex2d(2316, 871.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2259, 871.5f);
        glVertex2d(2259, 878.5f);
        glVertex2d(2307.5f, 878.5f);
        glVertex2d(2307.5f, 871.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2267.5f, 903);
        glVertex2d(2267.5f, 878.5f);
        glVertex2d(2259, 878.5f);
        glVertex2d(2259, 903);

    glEnd();

    //U

    glBegin(GL_QUADS);
        glVertex2d(2326.5f, 895);
        glVertex2d(2326.5f, 846.5f);
        glVertex2d(2318, 846.5f);
        glVertex2d(2318, 895);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2326.5f, 903);
        glVertex2d(2326.5f, 895);
        glVertex2d(2366.5f, 895);
        glVertex2d(2366.5f, 903);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2366.5f, 895);
        glVertex2d(2366.5f, 846.5f);
        glVertex2d(2375, 846.5f);
        glVertex2d(2375, 895);

    glEnd();

    //T
    glBegin(GL_QUADS);
        glVertex2d(2433, 846.5f);
        glVertex2d(2433, 854.5f);
        glVertex2d(2377, 854.5f);
        glVertex2d(2377, 846.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2400.5f, 903);
        glVertex2d(2400.5f, 854.5f);
        glVertex2d(2409.5f, 854.5f);
        glVertex2d(2409.5f, 903);

    glEnd();

    //E
    glBegin(GL_QUADS);
        glVertex2d(2443.5f, 895);
        glVertex2d(2443.5f, 854.5f);
        glVertex2d(2435, 854.5f);
        glVertex2d(2435, 895);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2443.5f, 846.5f);
        glVertex2d(2443.5f, 854.5f);
        glVertex2d(2491.5f, 854.5f);
        glVertex2d(2491.5f, 846.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2443.5f, 871.5f);
        glVertex2d(2443.5f, 878.5f);
        glVertex2d(2491.5f, 878.5f);
        glVertex2d(2491.5f, 871.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2443.5f, 895);
        glVertex2d(2443.5f, 903);
        glVertex2d(2491.5f, 903);
        glVertex2d(2491.5f, 895);

    glEnd();

    //R

    glBegin(GL_QUADS);
        glVertex2d(2493.5f, 903);
        glVertex2d(2493.5f, 854.5f);
        glVertex2d(2502, 854.5f);
        glVertex2d(2502, 903);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2502, 846.5f);
        glVertex2d(2502, 854.5f);
        glVertex2d(2542, 854.5f);
        glVertex2d(2542, 846.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2542, 871.5f);
        glVertex2d(2542, 854.5f);
        glVertex2d(2550.5f, 854.5f);
        glVertex2d(2550.5f, 871.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2542, 871.5f);
        glVertex2d(2542, 878.5f);
        glVertex2d(2519, 878.5f);
        glVertex2d(2519, 871.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2519, 878.5f);
        glVertex2d(2519, 895);
        glVertex2d(2510.5f, 895);
        glVertex2d(2510.5f, 878.5f);

    glEnd();

    glBegin(GL_QUADS);
        glVertex2d(2550.5f, 895);
        glVertex2d(2550.5f, 903);
        glVertex2d(2519, 903);
        glVertex2d(2519, 895);

    glEnd();
    }

    //--------GERAK GERAK GUYS--------\\

    void gerakTulisan()
    {

    glColor3d(0.169f,0.545f,0.882f);
    //Rian
    kanan = glfwGetTime()*690;
    glPushMatrix();
    if (kanan>3000) kanan = 3000;

    glTranslatef(kanan, 0, 0);

    glBegin(GL_QUADS);

        glVertex2f(1519.5, 450);
        glVertex2f(1131, 832);
        glVertex2f(3840, 832);
        glVertex2f(3840, 450);

    glEnd();


    glPopMatrix();

    //Grafkom
    kanan = glfwGetTime()* 650;
    glPushMatrix();

    if(kanan>3000) kanan = 3000;
    glTranslatef(kanan, 0, 0);


    glBegin(GL_QUADS);

        glVertex2d(1137.5f, 832);
        glVertex2d(3840, 832);
        glVertex2d(3840, 914.5f);
        glVertex2d(1055, 914.5f);

    glEnd();

    glPopMatrix();

    }

    void gerakPersonaCard()
    {
        kanan = glfwGetTime()*300;
        glPushMatrix();

        glTranslatef(388, 391, 0);
        glRotatef(kanan, 0, 1, 0);
        glTranslatef(-388, -391, 0);

        glColor3f(0.169f,0.545f,0.882f);

        glBegin(GL_QUADS);

            glVertex2f(164, 335);
            glVertex2f(388, 119);
            glVertex2f(580, 487);
            glVertex2f(388, 663);

        glEnd();

        glPopMatrix();

    }

    void gerakBulet()
    {

    //Biru
    glPushMatrix();
    kanan = glfwGetTime()*800;
    bawah = glfwGetTime()*800;

    if(kanan>1000)kanan=1000;
    if(bawah>1000)bawah=1000;
    glScalef(0.001,0.001,0);
    glScalef(kanan, bawah, 0);

    glBegin(GL_POLYGON);
    glColor3d(0.427f,0.702f,1.f);
    for(int i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(3656+116*cos(theta),1969+116*sin(theta));

        }
    glEnd();
    glPopMatrix();

    //Putih
    glPushMatrix();
    kanan = (glfwGetTime()-0.5)*800;
    bawah = (glfwGetTime()-0.5)*800;

    if(kanan>1000)kanan=1000;
    if(bawah>1000)bawah=1000;
    glScalef(0.001,0.001,0);
    glScalef(kanan, bawah, 0);

    glBegin(GL_POLYGON);
    glColor3d(1.f,1.f,1.f);
    for(int i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(3257+175*cos(theta),1890+175*sin(theta));

        }
    glEnd();
    glPopMatrix();

    //Hitam
    glPushMatrix();
    kanan = (glfwGetTime()-1)*800;
    bawah = (glfwGetTime()-1)*800;

    if(kanan>1000)kanan=1000;
    if(bawah>1000)bawah=1000;
    glScalef(0.001,0.001,0);
    glScalef(kanan, bawah, 0);

    glBegin(GL_POLYGON);
    glColor3d(0.0f,0.235f,0.373f);
    for(int i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(3559+234*cos(theta),1573.5+234*sin(theta));

        }
    glEnd();
    glPopMatrix();




    }


 int main(void) {
        //Window
        glfwSetErrorCallback(error_callback);

        if (!glfwInit())exit(EXIT_FAILURE);
        const GLFWvidmode* mode = glfwGetVideoMode(glfwGetPrimaryMonitor());

        glfwWindowHint(GLFW_RED_BITS, mode->redBits);
        glfwWindowHint(GLFW_GREEN_BITS, mode->greenBits);
        glfwWindowHint(GLFW_BLUE_BITS, mode->blueBits);
        glfwWindowHint(GLFW_REFRESH_RATE, mode->refreshRate);

        GLFWwindow* window = glfwCreateWindow(mode->width, mode->height, "My Title", glfwGetPrimaryMonitor(), NULL);

        if (!window){
          glfwTerminate();
          exit(EXIT_FAILURE);
        }

        glfwMakeContextCurrent(window);
        glfwSwapInterval(1);
        glfwSetKeyCallback(window, key_callback);

        while (!glfwWindowShouldClose(window)){
          int width, height;
          glfwGetFramebufferSize(window, &width, &height);

          //fungsi untuk menampilkan objek
          setup_viewport(window);
          if (aksi.x == 0 || aksi.x%2 == 0)
          {
            background1();
            tulisanPressEnter();
          }

          else
          {
            background2();
            tulisanGrafkom();
            tulisanNama();
            gerakTulisan();
            gerakPersonaCard();
            gerakBulet();
          }



          glfwSwapBuffers(window);
          glfwPollEvents();
        }

    //Fungsi Exit
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
 }
