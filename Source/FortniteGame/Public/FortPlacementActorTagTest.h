#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "FortPlacementActorTagTest.generated.h"

class AActor;
class AFortPlacementActor;

UCLASS(Blueprintable, NotPlaceable)
class UFortPlacementActorTagTest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToApplyOnSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToApplyOnFailure;
    
    UFortPlacementActorTagTest();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldApplyTagsToPlacementActor(AFortPlacementActor* FocusPlacementActor, const FVector& AveragePlacementActorLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LineTraceByChannel(AFortPlacementActor* PlacementActor, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, FHitResult& OutHit, bool bIgnoreSelf) const;
    
};

