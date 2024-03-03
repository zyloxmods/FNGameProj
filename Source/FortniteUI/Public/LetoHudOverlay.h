#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "LetoHudOverlay.generated.h"

class UHorizontalBox;
class ULetoPlayerAvatar;
class USpacer;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ULetoHudOverlay : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VBox_Container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_PlayerOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_PlayerTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* Spacer_PlayerOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* Spacer_PlayerTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULetoPlayerAvatar* LetoAvatar_PlayerOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULetoPlayerAvatar* LetoAvatar_PlayerTwo;
    
public:
    ULetoHudOverlay();
};

