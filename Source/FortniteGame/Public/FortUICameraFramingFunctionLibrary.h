#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortUICameraFrameTargetBounds.h"
#include "FortUICameraFrameTargetSettings.h"
#include "FortUICameraFramingFunctionLibrary.generated.h"

class AActor;
class ACharacter;
class AFortPlayerPawn;
class UAthenaCharacterPartItemDefinition;
class USceneComponent;

UCLASS(Blueprintable)
class UFortUICameraFramingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortUICameraFramingFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static FFortUICameraFrameTargetBounds CalculateVisibleItemDefinitionBoundsForCameraFraming(const UAthenaCharacterPartItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    static FFortUICameraFrameTargetBounds CalculateComponentSetBoundsForCameraFraming(const TSet<USceneComponent*>& Components, bool bIgnoreHiddenOrNotVisibleComponents, bool bIncludePSCs);
    
    UFUNCTION(BlueprintCallable)
    static FFortUICameraFrameTargetBounds CalculateComponentBoundsForCameraFraming(USceneComponent* ParentComponent, const bool bIncludePSCs);
    
    UFUNCTION(BlueprintCallable)
    static FFortUICameraFrameTargetBounds CalculateCharacterCapsuleForCameraFraming(const ACharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static FFortUICameraFrameTargetSettings CalculateCharacterBoundsForZoomedCameraFraming(const AFortPlayerPawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable)
    static FFortUICameraFrameTargetBounds CalculateCharacterBoundsForCameraFraming(const AFortPlayerPawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable)
    static FFortUICameraFrameTargetBounds CalculateActorBoundsForCameraFraming(const AActor* Actor, bool bIgnoreHiddenOrNotVisibleComponents, bool bIncludePSCs);
    
};

