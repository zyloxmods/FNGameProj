#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EFortReloadFXState.h"
#include "FortAnimNotify_PlayReloadFX.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_PlayReloadFX : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortReloadFXState ReloadStage;
    
    UFortAnimNotify_PlayReloadFX();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetReloadStage(EFortReloadFXState InReloadStage) const;
    
};

