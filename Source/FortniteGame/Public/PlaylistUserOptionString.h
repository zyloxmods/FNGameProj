#pragma once
#include "CoreMinimal.h"
#include "PlaylistUserOptionBase.h"
#include "PlaylistUserOptionString.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UPlaylistUserOptionString : public UPlaylistUserOptionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EntryCharLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeLocalized;
    
    UPlaylistUserOptionString();
};

