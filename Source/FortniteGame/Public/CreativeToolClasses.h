#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CreativeToolClasses.generated.h"

USTRUCT(BlueprintType)
struct FCreativeToolClasses : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> ClassPath;
    
    FORTNITEGAME_API FCreativeToolClasses();
};

