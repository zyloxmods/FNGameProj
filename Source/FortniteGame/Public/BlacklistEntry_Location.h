#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "BlacklistEntryBase.h"
#include "BlacklistEntry_Location.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBlacklistEntry_Location : public UBlacklistEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CheckLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CheckRadius;
    
    UBlacklistEntry_Location();
};

