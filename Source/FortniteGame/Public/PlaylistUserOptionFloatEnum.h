#pragma once
#include "CoreMinimal.h"
#include "PlaylistOptionFloatValue.h"
#include "PlaylistUserOptionBase.h"
#include "PlaylistUserOptionFloatEnum.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UPlaylistUserOptionFloatEnum : public UPlaylistUserOptionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaylistOptionFloatValue> OptionValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValueIndex;
    
    UPlaylistUserOptionFloatEnum();
};

