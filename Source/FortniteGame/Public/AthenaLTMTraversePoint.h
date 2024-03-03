#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AthenaTraversePoint.h"
#include "AthenaLTMTraversePoint.generated.h"

class AActor;

UCLASS(Blueprintable)
class FORTNITEGAME_API AAthenaLTMTraversePoint : public AAthenaTraversePoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TraversePointGameplayTags;
    
public:
    AAthenaLTMTraversePoint();
private:
    UFUNCTION(BlueprintCallable)
    void OnStartOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

