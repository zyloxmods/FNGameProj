#pragma once
#include "CoreMinimal.h"
#include "FortDialogExternalLatentActionHandle.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortDialogExternalLatentActionHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
public:
    FFortDialogExternalLatentActionHandle();
};

