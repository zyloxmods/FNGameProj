#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/CollisionProfile.h"
#include "ESubGame.h"
#include "CreativeBlueprintLibrary.generated.h"

class AController;
class UFortMinigameManager;

UCLASS(Blueprintable)
class UCreativeBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCreativeBlueprintLibrary();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> SegmentSphereIntersection(const FVector& SegmentStart, const FVector& SegmentEnd, const FVector& SphereOrigin, const float SphereRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> SegmentCylinderIntersection(const FVector& SegmentStart, const FVector& SegmentEnd, const FVector& CylinderOrigin, const float CylinderRadius);
    
    UFUNCTION(BlueprintCallable)
    static void LogHUDMessageWarning(const FString& inString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetNameFromCollisionProfile(FCollisionProfileName InCollisionProfile);
    
    UFUNCTION(BlueprintCallable)
    static UFortMinigameManager* GetMinigameManager(AController* Controller, ESubGame SubGame);
    
};

