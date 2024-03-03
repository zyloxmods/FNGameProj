#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SidecarFileInfo.h"
#include "SidecarDss.generated.h"

UCLASS(Blueprintable, Config=DefaultEngine)
class SIDECARSYS_API USidecarDss : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSidecarFileInfo> FileInfoMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DssDownloadUrl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DssCheckoutUrl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DssUploadUrl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DssRestoreUrl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DssCheckinUrl;
    
public:
    USidecarDss();
};

