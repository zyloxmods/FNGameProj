#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProfileUpdateSingle.h"
#include "ProfileUpdate.generated.h"

USTRUCT(BlueprintType)
struct FProfileUpdate : public FProfileUpdateSingle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResponseVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime ServerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProfileUpdateSingle> MultiUpdate;
    
    MCPPROFILESYS_API FProfileUpdate();
};

