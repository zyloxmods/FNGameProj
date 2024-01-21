#pragma once
#include "CoreMinimal.h"
#include "PlaylistOptionValue.h"
#include "PlaylistUserOptionBase.h"
#include "PlaylistUserOptionEnum.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UPlaylistUserOptionEnum : public UPlaylistUserOptionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaylistOptionValue> OptionValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValueIndex;
    
    UPlaylistUserOptionEnum();
};

