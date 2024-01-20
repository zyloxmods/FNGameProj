#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortItemEntry.h"
#include "AthenaCreativeItemEntryObjectWrapper.generated.h"

UCLASS(Blueprintable)
class UAthenaCreativeItemEntryObjectWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemEntry ItemEntry;
    
    UAthenaCreativeItemEntryObjectWrapper();
};

