#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AttributeClamp.h"
#include "PlayerClampInfo.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FPlayerClampInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttributeClamp> AttributeClamps;
    
    FPlayerClampInfo();
};

