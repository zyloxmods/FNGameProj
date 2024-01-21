#pragma once
#include "CoreMinimal.h"
#include "FortTabButtonLabelInfo.h"
#include "Templates/SubclassOf.h"
#include "FortTabListRegistrationInfo.generated.h"

class UCommonButton;
class UCommonUserWidget;
class UWidget;

USTRUCT(BlueprintType)
struct FFortTabListRegistrationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedInZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTabButtonLabelInfo TabLabelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButton> TabButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonUserWidget> TabContentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* CreatedTabContentWidget;
    
    FORTNITEUI_API FFortTabListRegistrationInfo();
};

