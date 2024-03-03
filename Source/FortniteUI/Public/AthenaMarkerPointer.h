#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "AthenaMarkerPointer.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class UAthenaMarkerPointer : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LineMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D TargetScreenPosition;
    
public:
    UAthenaMarkerPointer();
    UFUNCTION(BlueprintCallable)
    void SetTargetScreenPosition(FVector2D InTargetScreenPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetLineMeshMaterial(UMaterialInterface* Material);
    
};

