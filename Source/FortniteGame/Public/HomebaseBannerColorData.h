#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HomebaseBannerColorData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FHomebaseBannerColorData : public FTableRowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubCategoryGroup;
    
public:
    FHomebaseBannerColorData();
};

