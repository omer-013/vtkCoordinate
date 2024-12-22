#include <vtkCoordinate.h>
#include <vtkViewport.h>

int main() {
    // vtkCoordinate nesnesi oluşturuluyor
    vtkCoordinate* coordinate = vtkCoordinate::New();

    // Koordinat sistemini dünya koordinatları olarak ayarla
    coordinate->SetCoordinateSystemToWorld();

    // Koordinatın değerini ayarla (x, y, z)
    coordinate->SetValue(10.0, 20.0, 30.0);

    // Viewport (görünüm) nesnesi ile birlikte koordinatın görüntülenmiş değerini al
    vtkViewport* viewport = nullptr;  // Bu örnekte gerçek bir viewport nesnesi eklenmelidir
    int* displayValue = coordinate->GetComputedDisplayValue(viewport);  // Türü int* olarak değiştirilmelidir

    // Koordinatın dünya değerini al
    double* worldValue = coordinate->GetComputedWorldValue(viewport);

    // Belleği temizle
    coordinate->Delete();

    return 0;
}
