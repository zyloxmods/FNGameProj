#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FortWorldMarkerData.h"
#include "FortPlayerMarkerBase.generated.h"

class UAthenaMapMarkerItemDefinition;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortPlayerMarkerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ImpactLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaMapMarkerItemDefinition* CustomMarkerItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortWorldMarkerData CurrentMarkerData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    AFortPlayerMarkerBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupMarker(const FFortWorldMarkerData& MarkerData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayMarkerSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerPlaced();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerColorChanged(FLinearColor InColor);
    
};

