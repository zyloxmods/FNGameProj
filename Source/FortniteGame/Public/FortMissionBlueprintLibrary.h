#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortMissionBlueprintLibrary.generated.h"

class AFortPlayerPawn;
class UAthenaGliderItemDefinition;

UCLASS(Blueprintable)
class UFortMissionBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortMissionBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SkydiveFromLocation(bool bFromBus, AFortPlayerPawn* InPawn, const FVector FallLocation, const UAthenaGliderItemDefinition* GliderOverride);
    
    UFUNCTION(BlueprintCallable)
    static bool Skydive(bool bFromBus, AFortPlayerPawn* InPawn, const UAthenaGliderItemDefinition* GliderOverride);
    
};

