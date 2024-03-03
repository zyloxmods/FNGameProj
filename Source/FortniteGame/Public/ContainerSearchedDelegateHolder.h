#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventDelegateHolder.h"
#include "OnMissionContainerSearchedEventDelegate.h"
#include "ContainerSearchedDelegateHolder.generated.h"

UCLASS(Blueprintable)
class UContainerSearchedDelegateHolder : public UFortMissionEventDelegateHolder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionContainerSearchedEvent OnContainerSearchedDelegate;
    
public:
    UContainerSearchedDelegateHolder();
};

