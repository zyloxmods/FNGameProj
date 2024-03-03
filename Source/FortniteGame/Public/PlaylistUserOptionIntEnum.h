#pragma once
#include "CoreMinimal.h"
#include "PlaylistOptionIntValue.h"
#include "PlaylistUserOptionBase.h"
#include "PlaylistUserOptionIntEnum.generated.h"

UCLASS(Blueprintable)
class UPlaylistUserOptionIntEnum : public UPlaylistUserOptionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaylistOptionIntValue> OptionValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValueIndex;
    
    UPlaylistUserOptionIntEnum();
};

