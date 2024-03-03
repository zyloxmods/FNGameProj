#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EFortItemType.h"
#include "GameplayTagContainer.h"
#include "FortCameraTargetPedestal.generated.h"

class AFortItemPreviewActor;
class UChildActorComponent;
class UFortItem;

UCLASS(Blueprintable)
class AFortCameraTargetPedestal : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CameraTargetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* PedestalBaseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* CurrentPrimaryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortItemPreviewActor* ItemPreviewActor;
    
public:
    AFortCameraTargetPedestal();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemPreviewCleared();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDisplayed(EFortItemType ItemType);
    
};

