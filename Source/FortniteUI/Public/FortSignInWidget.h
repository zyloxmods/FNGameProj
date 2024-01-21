#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "Types/SlateEnums.h"
#include "Templates/SubclassOf.h"
#include "FortSignInWidget.generated.h"

class UCommonBorder;
class UCommonBorderStyle;
class UCommonButton;
class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSignInWidget : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonBorderStyle> NormalBorderStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonBorderStyle> HighlightBorderStyle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ForgotPasswordURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* Email;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* Password;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* EmailBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* PasswordBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* SignInButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ForgotPassword;
    
public:
    UFortSignInWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSignInButton(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void StartSignIn();
    
    UFUNCTION(BlueprintCallable)
    void HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
};

