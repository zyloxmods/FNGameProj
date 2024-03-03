#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CosmeticPreviewInterface.h"
#include "FortUICameraFrameTargetInterface.h"
#include "FortEmotePreviewActor.generated.h"

class UFortMontageItemDefinitionBase;

UCLASS(Abstract, Blueprintable)
class AFortEmotePreviewActor : public AActor, public IFortUICameraFrameTargetInterface, public ICosmeticPreviewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMontageItemDefinitionBase* PreviewingEmote;
    
public:
    AFortEmotePreviewActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewEmote(const UFortMontageItemDefinitionBase* Emote);
    
    
    // Fix for true pure virtual functions not being implemented
};

