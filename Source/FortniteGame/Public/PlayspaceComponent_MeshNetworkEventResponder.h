#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortPlayspaceComponent.h"
#include "PlayspaceComponent_MeshNetworkEventResponder.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayspaceComponent_MeshNetworkEventResponder : public UFortPlayspaceComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGameplayTagContainer> ActiveEventsToTagsToApplyMap;
    
public:
    UPlayspaceComponent_MeshNetworkEventResponder();
};

