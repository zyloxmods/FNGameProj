#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "AthenaSpatialFrontend.generated.h"

class AFortEventLevelNavigationActor;
class UCommonLazyWidget;
class UFortEventLevelNavigationDetails;
class UFortGameStateComponent_EventLevel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialFrontend : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyWidget* Lazy_ActiveScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEventLevelNavigationDetails* NavActor_Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StartingActiveCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChallengesCameraTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SelectObjectInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_EventLevel* EventGameStateComponent;
    
public:
    UAthenaSpatialFrontend();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedNavObjectChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventLevelTransitionComplete(const FGameplayTag& ActiveCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventLevelTransitionBegin(const FGameplayTag& TargetCamera, const AFortEventLevelNavigationActor* TargetNavActor);
    
};

