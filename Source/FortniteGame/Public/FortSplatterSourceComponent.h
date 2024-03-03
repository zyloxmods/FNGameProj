#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortSplatterSourceComponent.generated.h"

class AActor;
class AFortSplineGroundPath;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortSplatterSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> PreviousSources;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortSplineGroundPath> FortSplineGroundPath;
    
    UFortSplatterSourceComponent();
    UFUNCTION(BlueprintCallable)
    int32 AddPreviousSource(AActor* Actor);
    
};

