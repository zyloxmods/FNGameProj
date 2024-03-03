#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingAutoNav.h"
#include "TimeOfDayBlueprintDefaultVariables.h"
#include "BuildingTimeOfDayLights.generated.h"

class ULightComponent;

UCLASS(Blueprintable)
class ABuildingTimeOfDayLights : public ABuildingAutoNav {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTimeOfDayControlledLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULightComponent*> TimeOfDayControlledLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TimeOfDayControlledLightsPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TimeOfDayControlledLightsInitalIntensities;
    
public:
    ABuildingTimeOfDayLights();
protected:
   // UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
 //   void GetTimeOfDayBlueprintDefaultVariables(FTimeOfDayBlueprintDefaultVariables OutVariables);
    
};

