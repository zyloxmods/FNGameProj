#pragma once
#include "CoreMinimal.h"
#include "EFortItemType.h"
#include "PlaylistUserOptionBase.h"
#include "PlaylistUserOptionItemType.generated.h"

UCLASS(Blueprintable)
class UPlaylistUserOptionItemType : public UPlaylistUserOptionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValueIndex;
    
    UPlaylistUserOptionItemType();
};

