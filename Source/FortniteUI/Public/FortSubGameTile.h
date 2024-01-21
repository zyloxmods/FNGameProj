#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "SubgameDisplayData.h"
#include "FortSubGameTile.generated.h"

class UEpicCMSImage;

UCLASS(Blueprintable, EditInlineNew)
class UFortSubGameTile : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEpicCMSImage* Image_KeyArt;
    
public:
    UFortSubGameTile();
    UFUNCTION(BlueprintCallable)
    void SetSubGame(const FSubgameDisplayData& SubGame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshSubGameDisplay(FSubgameDisplayData SubGame);
    
};

