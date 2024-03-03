#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortCameraBase.h"
#include "FortTheaterCamera.generated.h"

class AFortTheaterMapTile;

UCLASS(Blueprintable)
class AFortTheaterCamera : public AFortCameraBase {
    GENERATED_BODY()
public:
    AFortTheaterCamera();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTileFocus(AFortTheaterMapTile* TargetTile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector LimitToTheater(const FVector& DesiredPosition) const;
    
};

