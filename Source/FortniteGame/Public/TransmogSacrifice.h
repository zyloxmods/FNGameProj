#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TransmogSacrifice.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FTransmogSacrifice : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TransmogSacrificePoints;
    
    FTransmogSacrifice();
};

