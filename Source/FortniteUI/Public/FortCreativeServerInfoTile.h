#pragma once
#include "CoreMinimal.h"
#include "FortServerInfoTileBase.h"
#include "FortCreativeServerInfoTile.generated.h"

class UCommonTextBlock;
class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeServerInfoTile : public UFortServerInfoTileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_FriendsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichText_RemainingFriends;
    
public:
    UFortCreativeServerInfoTile();
};

