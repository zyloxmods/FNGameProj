#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortSurfaceDamageRatioByAffiliationStats.generated.h"

USTRUCT(BlueprintType)
struct FFortSurfaceDamageRatioByAffiliationStats : public FTableRowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Friendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Neutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hostile;
    
public:
    FORTNITEGAME_API FFortSurfaceDamageRatioByAffiliationStats();
};

