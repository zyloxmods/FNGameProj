#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengeScreenTileBase.h"
#include "AthenaChallengeSetTile.generated.h"

class UAthenaChallengeProgressBar;
class UCommonRichTextBlock;
class UCommonTextBlock;
class UFortLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeSetTile : public UAthenaChallengeScreenTileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeProgressBar* ChallengeProgress_QuestsCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChallengeContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* LazyImage_CustomBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_UnavailableReason;
    
public:
    UAthenaChallengeSetTile();
};

