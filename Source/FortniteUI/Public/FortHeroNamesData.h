#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortHeroNamesData.generated.h"

USTRUCT(BlueprintType)
struct FFortHeroNamesData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FirstName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NickName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastName;
    
    FORTNITEUI_API FFortHeroNamesData();
};

