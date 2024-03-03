#pragma once
#include "CoreMinimal.h"
#include "PlaylistUserOptionBase.h"
#include "PlaylistUserOptionBool.generated.h"

UCLASS(Blueprintable)
class UPlaylistUserOptionBool : public UPlaylistUserOptionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionOnText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionOffText;
    
    UPlaylistUserOptionBool();
};

