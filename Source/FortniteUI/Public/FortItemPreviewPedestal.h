#pragma once
#include "CoreMinimal.h"
#include "FortItemPlacementActor.h"
#include "FortItemPreviewPedestal.generated.h"

class APlayerController;
class UChildActorComponent;
class UCustomCharacterPart;
class UFortHero;
class UFortItem;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortItemPreviewPedestal : public AFortItemPlacementActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerController> ContextualPlayerController;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortHero* TemporaryHeroInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> AdditionalCharacterParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* WeaponPlacementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* PreviewActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PreviewStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PreviewSkelMeshComponent;
    
public:
    AFortItemPreviewPedestal();
    UFUNCTION(BlueprintCallable)
    void PreviewItemBP(UFortItem* Item, bool bIncludeCurrentLoadout);
    
    UFUNCTION(BlueprintCallable)
    void ClearDisplay();
    
};

