#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavArrow.generated.h"

class UDestinationTrackerPawnComponent;

UCLASS(Blueprintable, MinimalAPI)
class ANavArrow : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestinationTrackerPawnComponent* DestinationTrackerComponent;
    
    ANavArrow();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowArrow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestinationChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideArrow();
    
};

