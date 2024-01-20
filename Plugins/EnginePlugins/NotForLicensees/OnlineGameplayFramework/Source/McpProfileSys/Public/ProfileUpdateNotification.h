#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JsonObjectWrapper.h"
#include "ProfileUpdateNotification.generated.h"

USTRUCT(BlueprintType)
struct FProfileUpdateNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJsonObjectWrapper> Changes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LockExpiration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommandRevision;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Revision;
    
    MCPPROFILESYS_API FProfileUpdateNotification();
};

